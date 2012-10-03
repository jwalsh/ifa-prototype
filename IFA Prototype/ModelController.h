//
//  ModelController.h
//  IFA Prototype
//
//  Created by Jason Walsh on 10/3/12.
//  Copyright (c) 2012 Jason Walsh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
