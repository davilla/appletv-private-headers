/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarComposedData : NSObject {
@private
	XXStruct_rfflIA _rawData;	// 4 = 0x4
	BOOL _itemEnabled[23];	// 2068 = 0x814
	NSString *_doubleHeightStatus;	// 2092 = 0x82c
}
@property(copy, nonatomic) NSString *doubleHeightStatus;	// G=0x3324b879; S=0x32ecdce5; @synthesize=_doubleHeightStatus
@property(readonly, assign, nonatomic) XXStruct_rfflIA *rawData;	// G=0x32ecdd49; 
- (id)initWithRawData:(XXStruct_rfflIA)rawData;	// 0x32ecccc1
- (void)dealloc;	// 0x32ed09b5
// declared property getter: - (id)doubleHeightStatus;	// 0x3324b879
- (BOOL)isItemEnabled:(int)enabled;	// 0x32ece185
// declared property getter: - (XXStruct_rfflIA *)rawData;	// 0x32ecdd49
// declared property setter: - (void)setDoubleHeightStatus:(id)status;	// 0x32ecdce5
- (void)setItem:(int)item enabled:(BOOL)enabled;	// 0x32ecdd59
@end

