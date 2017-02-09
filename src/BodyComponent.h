#ifndef SUNFLOWERSPANIEL_BODYCOMPONENT_H
#define SUNFLOWERSPANIEL_BODYCOMPONENT_H


#include <Box2D/Box2D.h>
#include <glm/glm.hpp>
#include <Falcon/2D/DebugRenderer/DebugRenderer.h>
#include <TinyXML2/tinyxml2.h>
#include "Component.h"

class BodyComponent : public Component
{
public:
    BodyComponent() {};

    void init(tinyxml2::XMLNode *pNode) override;
    void init(b2World *world, const glm::vec2 position, const glm::vec2 dimensions, b2BodyType bodyType, bool fixedRotation);

    void update(GameObject* obj, float deltaTime) override {};

    // Getters
    b2Body* getBody() const { return m_body; };
    glm::vec2 getPosition();

    // Setters
    void setBody(b2Body* body) { m_body = body; };
    void setWorld(b2World* world) { m_world = world; };
    void setPosition(glm::vec2 pos) { m_body->SetTransform(b2Vec2(pos.x, pos.y), m_body->GetAngle()); };

protected:
    b2Body* m_body = nullptr;
    b2World* m_world = nullptr;
};


#endif