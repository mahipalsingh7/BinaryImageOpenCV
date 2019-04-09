//
//  PHOpenCVWrapper.h
 
//
//  Created by Mahipal 2018 on 05/04/19.
//  Copyright © 2019 Mahipal Singh. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@interface PHOpenCVWrapper : NSObject
+ (NSString *)openCVVersionString;
+(nonnull UIImage *)cvtColorBGR2GRAY:(nonnull UIImage *)image ;
@end

NS_ASSUME_NONNULL_END
