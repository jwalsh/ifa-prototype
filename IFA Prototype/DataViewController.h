//
//  DataViewController.h
//  IFA Prototype
//
//  Created by Jason Walsh on 10/3/12.
//  Copyright (c) 2012 Jason Walsh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
