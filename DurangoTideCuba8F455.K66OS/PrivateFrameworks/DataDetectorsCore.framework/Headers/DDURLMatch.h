/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <NSObject.h> // Unknown library
#import "DataDetectorsCore-Structs.h"

@class NSString;

@interface DDURLMatch : NSObject {
	NSRange _range;	// 4 = 0x4
	NSString *_url;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x3458a8c9; converted property
@property(readonly, retain) NSString *url;	// G=0x3458a8e1; converted property
- (id)initWithRange:(NSRange)range url:(id)url;	// 0x3458b239
- (int)compare:(id)compare;	// 0x3458ab65
- (void)dealloc;	// 0x3458b1f1
- (id)description;	// 0x3458b29d
// converted property getter: - (NSRange)range;	// 0x3458a8c9
// converted property getter: - (id)url;	// 0x3458a8e1
@end

