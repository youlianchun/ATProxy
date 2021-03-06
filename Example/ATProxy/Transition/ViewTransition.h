//
//  ViewTransition.h
//  Transition
//
//  Created by YLCHUN on 2019/3/16.
//  Copyright © 2019 ylchun. All rights reserved.
//
//  不兼容交互动画

#import <UIKit/UIKit.h>
#import "TransitionOperation.h"

NS_ASSUME_NONNULL_BEGIN

@interface ViewTransition : NSObject<UIViewControllerAnimatedTransitioning>
@property (nonatomic, readonly) TransitionOperation type;

@property (nonatomic, weak) UIView *from;
@property (nonatomic, weak) UIView *to;
- (instancetype)initWithTransitionType:(TransitionOperation)type;
@end

NS_ASSUME_NONNULL_END
