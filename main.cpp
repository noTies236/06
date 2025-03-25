#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4
#include <glm/ext/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale
#include <glm/ext/matrix_clip_space.hpp> // glm::perspective
#include <glm/ext/scalar_constants.hpp> // glm::pi

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/string_cast.hpp>

#include <iostream>

int main()
{
	glm::vec3 A(1.0f, 0.0f, 0.0f);
	glm::vec3 B(0.0f, 1.0f, 0.0f);
	glm::vec3 normal = glm::normalize(A);
	glm::vec3 normalA = glm::normalize(A);
	glm::vec3 normalB = glm::normalize(B);
	glm::vec3 cross = glm::cross(normalB, normalA);

	float f = glm::dot(normalA, normalB); // Você está obtendo o cosseno do ângulo entre os vetores A e B.
	std::cout << "vec length: " << glm::length(A) << "\n";
	std::cout << glm::to_string(glm::normalize(A)) << "\n";
	std::cout << "DOT: " << (glm::dot(A, B)) << "\n";
	std::cout << "normal --> A: " << glm::to_string(normalA) << "\n";
	std::cout << "normal --> B: " << glm::to_string(normalB) <<"\n";
	std::cout << "normal: " << glm::to_string(normal) << "\n";
	std::cout << "acos: " << std::acos(f) * 180.0 / 3.14159265358979323846 << "\n";
	std::cout << "cross A n B -->: " << glm::to_string(cross) << "\n";

	return 0;
} 