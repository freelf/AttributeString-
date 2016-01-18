//
//  FontStyle.h
//  NSAttributedString 的简易封装
//
//  Created by 郑欣 on 15/11/12.
//  Copyright © 2015年 运营网. All rights reserved.
//

#import "AttrbuteStyle.h"

@interface FontStyle : AttrbuteStyle
+(id)withFont:(UIFont *)font range:(NSRange)range;
@end
/**
 *  内容函数
 *
 *  @param font  字体
 *  @param range 范围
 *
 *  @return 实例对象
 */
static inline AttrbuteStyle* fontStyle(UIFont *font,NSRange range){
    return [FontStyle withFont:font range:range];
}