/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIScreenMode : NSObject {
@private
	id _mode;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) float pixelAspectRatio;	// G=0x300a56b9; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x30321f91; 
+ (id)screenModeForDisplayMode:(id)displayMode;	// 0x300a5581
- (id)initWithDisplayMode:(id)displayMode;	// 0x300a563d
- (id)_displayMode;	// 0x30321f81
- (BOOL)_isNTSCOrPAL;	// 0x300a568d
- (id)description;	// 0x30321fed
// declared property getter: - (float)pixelAspectRatio;	// 0x300a56b9
// declared property getter: - (CGSize)size;	// 0x30321f91
@end

