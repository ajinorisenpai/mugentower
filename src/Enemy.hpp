//
//  Enemy.hpp
//  empty
//
//  Created by 坂井創一 on 2019/08/10.
//

#ifndef Enemy_hpp
#define Enemy_hpp

#include <Siv3D.hpp>

class Enemy{
private:
    
public:
    static constexpr Size blockSize = Size(40,20);
    Rect rect;
    
    Enemy(Vec2 p){
        rect = Rect(p.x * Enemy::blockSize.x, 60 + p.y * Enemy::blockSize.y,
                    Enemy::blockSize.x,Enemy::blockSize.y);
    }

    void update(){
        
    }
    
    //メンバ関数の右側にconstをつけると、そのメンバ関数内ではメンバ変数の変更ができなくなる
    void draw() const{
        rect.stretched(-1).draw(HSV(rect.y - 40));
    };
    
};

#endif /* Enemy_hpp */
