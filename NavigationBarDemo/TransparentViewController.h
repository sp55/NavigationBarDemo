//
//  TransparentViewController.h
//  NavigationBarDemo
//
//  Created by admin on 16/5/4.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^AlphaBlock)(CGFloat alpha);


@interface TransparentViewController : UIViewController


@property (nonatomic, copy) AlphaBlock alphaBlock;


@end
