//
//  HKViewController.h
//  CrystalBall
//
//  Created by Habib Khan on 12/28/13.
//  Copyright (c) 2013 HabibKhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HKCrystalBall;

@interface HKViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *predictionText;
@property (strong, nonatomic) HKCrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void) makePrediction;

@end
