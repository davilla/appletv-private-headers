/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import "DataDetectorsCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface DDURLMatch : NSObject {
	NSRange _range;	// 4 = 0x4
	NSString *_url;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x357b3a41; converted property
@property(readonly, retain) NSString *url;	// G=0x357b3a5d; converted property
- (id)initWithRange:(NSRange)range url:(id)url;	// 0x357b3989
- (int)compare:(id)compare;	// 0x357b3a6d
- (void)dealloc;	// 0x357b39f5
- (id)description;	// 0x357b3ac9
// converted property getter: - (NSRange)range;	// 0x357b3a41
// converted property getter: - (id)url;	// 0x357b3a5d
@end

