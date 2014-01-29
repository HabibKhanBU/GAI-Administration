//
//  HKCrystalBall.m
//  CrystalBall
//
//  Created by Habib Khan on 12/28/13.
//  Copyright (c) 2013 HabibKhan. All rights reserved.
//

#import "HKCrystalBall.h"

@implementation HKCrystalBall

- (NSArray *) predictions
{
    if (_predictions == nil)
    {
        _predictions = [[NSArray alloc] initWithObjects:
                        @"It is decidedly so",
                        @"There's no way in hell",
                        @"It is certain",
                        @"All signs say YES",
                        @"My reply is no",
                        @"The stars are not aligned",
                        @"It is doubtful",
                        @"Better not tell you now",
                        @"Concentrate and ask again",
                        @"Unable to answer now",
                        nil];
    }
    return _predictions;
}

- (NSString *) randomPrediction
{
    int randy = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:randy];
}

@end
