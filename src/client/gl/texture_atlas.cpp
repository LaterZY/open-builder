#include "texture_atlas.h"

/*
namespace client {
    TextureAtlas::TextureAtlas(const std::string &textureFileName,
                               int textureSize)
        : m_individualTextureSize(textureSize)
    {
        auto image = m_texture.create(textureFileName);

        // TODO Ensure sizes
        m_imageSize = image.getSize().x;
    }

    std::array<GLfloat, 8> TextureAtlas::getTexture(const sf::Vector2i &coords)
    {
        static const GLfloat TEX_PER_ROW =
            (GLfloat)m_imageSize / (GLfloat)m_individualTextureSize;
        static const GLfloat INDV_TEX_SIZE = 1.0f / TEX_PER_ROW;
        static const GLfloat PIXEL_SIZE = 1.0f / (float)m_imageSize;

        GLfloat xMin = (coords.x * INDV_TEX_SIZE) + 0.5f * PIXEL_SIZE;
        GLfloat yMin = (coords.y * INDV_TEX_SIZE) + 0.5f * PIXEL_SIZE;

        GLfloat xMax = (xMin + INDV_TEX_SIZE) - PIXEL_SIZE;
        GLfloat yMax = (yMin + INDV_TEX_SIZE) - PIXEL_SIZE;

        return {xMax, yMax, xMin, yMax, xMin, yMin, xMax, yMin};
    }
} // namespace client
*/