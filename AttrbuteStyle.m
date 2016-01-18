//
//  AttrbuteStyle.m
//  NSAttributedString 的简易封装
//
//  Created by 郑欣 on 15/11/12.
//  Copyright © 2015年 运营网. All rights reserved.
//

#import "AttrbuteStyle.h"

@implementation AttrbuteStyle
+(AttrbuteStyle *)attributeName:(NSString *)attributeName value:(id)value range:(NSRange)range{
    AttrbuteStyle *style = [[self class] new];
    style.attributeName = attributeName;
    style.value = value;
    style.range = range;
    return style;
}
@end
