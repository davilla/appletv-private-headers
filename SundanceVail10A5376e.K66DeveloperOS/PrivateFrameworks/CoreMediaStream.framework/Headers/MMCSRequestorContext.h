/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MMCSEngine;
@protocol NSObject;

@interface MMCSRequestorContext : NSObject {
	MMCSEngine *_engine;	// 4 = 0x4
	id<NSObject> _context;	// 8 = 0x8
	char **_signatures;	// 12 = 0xc
	unsigned long _count;	// 16 = 0x10
	unsigned long long *_itemIDs;	// 20 = 0x14
	unsigned *_itemFlags;	// 24 = 0x18
	char **_authTokens;	// 28 = 0x1c
	int _type;	// 32 = 0x20
}
@property(assign, nonatomic) char **authTokens;	// G=0x316ea119; S=0x316ea129; @synthesize=_authTokens
@property(assign, nonatomic) __weak id<NSObject> context;	// G=0x316ea065; S=0x316ea085; @synthesize=_context
@property(assign, nonatomic) unsigned long count;	// G=0x316ea0b9; S=0x316ea0c9; @synthesize=_count
@property(assign, nonatomic) __weak MMCSEngine *engine;	// G=0x316ea031; S=0x316ea051; @synthesize=_engine
@property(assign, nonatomic) unsigned *itemFlags;	// G=0x316ea0f9; S=0x316ea109; @synthesize=_itemFlags
@property(assign, nonatomic) unsigned long long *itemIDs;	// G=0x316ea0d9; S=0x316ea0e9; @synthesize=_itemIDs
@property(assign, nonatomic) char **signatures;	// G=0x316ea099; S=0x316ea0a9; @synthesize=_signatures
@property(assign, nonatomic) int type;	// G=0x316ea139; S=0x316ea149; @synthesize=_type
+ (id)contextWithEngine:(id)engine context:(id)context type:(int)type;	// 0x316e9e69
- (id)initWithEngine:(id)engine context:(id)context type:(int)type;	// 0x316e9edd
- (void).cxx_destruct;	// 0x316ea159
// declared property getter: - (char **)authTokens;	// 0x316ea119
// declared property getter: - (id)context;	// 0x316ea065
// declared property getter: - (unsigned long)count;	// 0x316ea0b9
- (void)dealloc;	// 0x316e9f7d
// declared property getter: - (id)engine;	// 0x316ea031
- (BOOL)isEqual:(id)equal;	// 0x316ea025
// declared property getter: - (unsigned *)itemFlags;	// 0x316ea0f9
// declared property getter: - (unsigned long long *)itemIDs;	// 0x316ea0d9
// declared property setter: - (void)setAuthTokens:(char **)tokens;	// 0x316ea129
// declared property setter: - (void)setContext:(id)context;	// 0x316ea085
// declared property setter: - (void)setCount:(unsigned long)count;	// 0x316ea0c9
// declared property setter: - (void)setEngine:(id)engine;	// 0x316ea051
// declared property setter: - (void)setItemFlags:(unsigned *)flags;	// 0x316ea109
// declared property setter: - (void)setItemIDs:(unsigned long long *)ids;	// 0x316ea0e9
// declared property setter: - (void)setSignatures:(char **)signatures;	// 0x316ea0a9
// declared property setter: - (void)setType:(int)type;	// 0x316ea149
// declared property getter: - (char **)signatures;	// 0x316ea099
// declared property getter: - (int)type;	// 0x316ea139
@end

