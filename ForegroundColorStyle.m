//
//  ForegroundColorStyle.m
//  NSAttributedString 的简易封装
//
//  Created by 郑欣 on 15/11/12.
//  Copyright © 2015年 运营网. All rights reserved.
//

#import "ForegroundColorStyle.h"

@implementation ForegroundColorStyle
+ (id)withColor:(UIColor *)color range:(NSRange)range {
    
    id style = [super attributeName:NSForegroundColorAttributeName
                              value:color
                              range:range];
    
    return style;
}
@end
