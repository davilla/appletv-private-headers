/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {
	NSString *_longID;	// 4 = 0x4
	int _bodyFormat;	// 8 = 0x8
	int _maxSize;	// 12 = 0xc
}
@property(readonly, assign) int bodyFormat;	// G=0x3119554d; converted property
@property(readonly, retain) NSString *longID;	// G=0x3119553d; converted property
@property(readonly, assign) int maxSize;	// G=0x3119555d; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withLongID:(id)longID withBodySizeLimit:(int)bodySizeLimit;	// 0x311954bd
// converted property getter: - (int)bodyFormat;	// 0x3119554d
- (void)dealloc;	// 0x31195755
- (id)description;	// 0x311956cd
- (unsigned)hash;	// 0x3119556d
- (BOOL)isEqual:(id)equal;	// 0x31195609
// converted property getter: - (id)longID;	// 0x3119553d
// converted property getter: - (int)maxSize;	// 0x3119555d
@end

