#pragma once

class float3 {
public:
    float x, y, z;

    float3() {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }

    float3(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    float3(const float3& f3) {
        x = f3.x;
        y = f3.y;
        z = f3.z;
    }

    float length() {
        return sqrt((x * x) + (y * y) + (z * z));
    }

    void normalize() {
        float len = length();
        x /= len;
        y /= len;
        z /= len;
    }

    void print() {
        std::cout << "[" << x << ", " << y << ", " << z << "]\n";
    }

    float3 operator + (const float val) const {
        return float3(x + val, y + val, z + val);
    }

    float3 operator - (const float val) const {
        return float3(x - val, y - val, z - val);
    }

    float3 operator * (const float val) const {
        return float3(x * val, y * val, z * val);
    }

    float3 operator / (const float val) const {
        return float3(x / val, y / val, z / val);
    }

    float3 operator + (const float3& f3) const {
        return float3(x + f3.x, y + f3.y, z + f3.z);
    }

    float3 operator - (const float3& f3) const {
        return float3(x - f3.x, y - f3.y, z - f3.z);
    }

    void operator += (const float val) {
        x += val;
        y += val;
        z += val;
    }

    void operator -= (const float val) { 
        x -= val;
        y -= val;
        z -= val;
    }

    void operator *= (const float val) {
        x *= val;
        y *= val;
        z *= val;
    }

    void operator /= (const float val) {
        x /= val;
        y /= val;
        z /= val;
    }

    void operator = (const float3& f3) {
		x = f3.x;
		y = f3.y;
		z = f3.z;
	}

    void operator += (const float3 f3) {
        x += f3.x;
        y += f3.y;
        z += f3.z;
    }

    void operator -= (const float3 f3) {
        x -= f3.x;
        y -= f3.y;
        z -= f3.z;
    }

    bool operator > (float3 f3) {
        float len1 = length();
        float len2 = f3.length();
        return len1 > len2;
    }

    bool operator < (float3 f3) {
        float len1 = length();
        float len2 = f3.length();
        return len1 < len2;
    }
};