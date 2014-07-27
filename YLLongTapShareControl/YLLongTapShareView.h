//
//  YLLongTapShareView.h
//  YLLongTapShareControlDemo
//
//  Created by Yong Li on 7/22/14.
//  Copyright (c) 2014 Yong Li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YLShareView.h"

@class YLLongTapShareView;
@protocol YLLongTapShareViewDelegate <NSObject>

- (void)longTapShareView:(UIView*)view didSelectShareTo:(YLShareItem*)item withIndex:(NSUInteger)index;

@end

@interface YLLongTapShareView : UIView

@property (nonatomic, weak) id<YLLongTapShareViewDelegate> delegate;

- (void)addShareItem:(YLShareItem*)item;

@end

@interface UIButton(LongTapShare)

@property (nonatomic, strong) NSMutableArray* shareItems;
@property (nonatomic, strong) YLShareView* shareView;
@property (nonatomic, weak) id<YLLongTapShareViewDelegate> delegate;

- (void)addShareItem:(YLShareItem*)item;

@end