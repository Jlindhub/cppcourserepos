#pragma once

class String
{
    int max_size_; //useful for error handling  // NOLINT(clang-diagnostic-unused-private-field)
    int length;
    char* buffer;

public:
    String(const char* input,int maxSize);

    String(int maxSize);
    String(const String& other);

    String& operator=(const String& other);
    String( String&& other) noexcept;
    String& operator=(String&& other) noexcept;

    ~String();

    void append(const char* input);

    void appendLine(const char* input);

    void readString() const;
};
