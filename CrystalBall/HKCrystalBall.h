//
//  HKCrystalBall.h
//  CrystalBall
//
//  Created by Habib Khan on 12/28/13.
//  Copyright (c) 2013 HabibKhan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HKCrystalBall : NSObject
{
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString*) randomPrediction;

@end
