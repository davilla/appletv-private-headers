/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@protocol UIAccelerometerDelegate;

@interface UIAccelerometer : NSObject {
@private
	double _updateInterval;	// 4 = 0x4
	id<UIAccelerometerDelegate> _delegate;	// 12 = 0xc
	mdocFlags _accelerometerFlags;	// 16 = 0x10
}
@property(assign, nonatomic) id<UIAccelerometerDelegate> delegate;	// G=0x35563601; S=0x35563449; @synthesize=_delegate
@property(assign, nonatomic) double updateInterval;	// G=0x355635e9; S=0x355633e9; @synthesize=_updateInterval
+ (id)sharedAccelerometer;	// 0x35563355
- (id)init;	// 0x35563391
- (void)_acceleratedInX:(double)x y:(double)y z:(double)z timestamp:(double)timestamp;	// 0x35563509
// declared property getter: - (id)delegate;	// 0x35563601
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35563449
// declared property setter: - (void)setUpdateInterval:(double)interval;	// 0x355633e9
// declared property getter: - (double)updateInterval;	// 0x355635e9
@end

