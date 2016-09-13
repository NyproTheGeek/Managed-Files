#ifndef SKELETON_H
#define SKELETON_H

class Bone;

#include "Skin.h"
#include "Animation.h"
#include <QMap>
#include <QList>
#include <string>
#include <memory>

class Skeleton
{
public:
    Skeleton();
    std::string name;
    std::string imagesFolder;
    QMap<std::string, std::shared_ptr<Bone>> bones;
    QMap<std::string, std::shared_ptr<Animation>> anims;
    QMap<std::string, std::shared_ptr<Skin>> skins;

    void animate(std::string anim);
    void animate(std::shared_ptr<Animation> anim);
    void listAnimate(QList<std::string> anims, std::shared_ptr<CurveGraph> curve); // this uses the provided curveGraph between animations else uses the brigeSheets between animations
    void setSkin(std::string skin);
};

#endif // SKELETON_H
