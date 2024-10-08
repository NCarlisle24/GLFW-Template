#version 330 core
out vec4 FragColor;

uniform float time;

void main() {
    FragColor = vec4(1.0f, 0.5 + 0.5*sin(time), 0.2f, 1.0f);
}