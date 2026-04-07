#pragma once
#include <string>
#include <GL/glew.h>

class Shader
{
public:
    GLuint ID;

    Shader(const char* vertexPath, const char* fragmentPath);

    void use() const;

    void setFloat(const std::string& name, float value) const;

private:
    std::string loadFile(const char* path);
};