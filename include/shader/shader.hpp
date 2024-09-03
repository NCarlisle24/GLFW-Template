#include <fstream>

class Shader {
    public:
        unsigned int id;
        Shader(const char* vertexFilePath, const char* fragmentFilePath);
        void use();
        static void unuse();
        void setUniform1f(const char* uniformName, const float val);
        void setUniform1f(const char* uniformName, const float* vec);
        void setUniform2f(const char* uniformName, const float val1, const float val2);
        void setUniform2f(const char* uniformName, const float* vec);
        void setUniform3f(const char* uniformName, const float val1, const float val2, const float val3);
        void setUniform3f(const char* uniformName, const float* vec);
        void setUniform4f(const char* uniformName, const float val1, const float val2, const float val3, const float val4);
        void setUniform4f(const char* uniformName, const float* vec);
};