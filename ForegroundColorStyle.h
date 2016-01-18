//
//  ForegroundColorStyle.h
//  NSAttributedString 的简易封装
//
//  Created by 郑欣 on 15/11/12.
//  Copyright © 2015年 运营网. All rights reserved.
//

#import "AttrbuteStyle.h"

@interface ForegroundColorStyle : AttrbuteStyle
+ (id)withColor:(UIColor *)color range:(NSRange)range;
@end
/**
 *  内联函数
 *
 *  @param color 颜色
 *  @param range 范围
 *
 *  @return 实例对象
 */
static inline AttrbuteStyle* colorStyle(UIColor *color,NSRange range){
    return [ForegroundColorStyle withColor:color range:range];
}