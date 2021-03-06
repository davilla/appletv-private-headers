/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKBShape.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIKBCacheKey.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSDictionary;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey> {
	NSString *m_name;	// 64 = 0x40
	NSString *m_visualStyle;	// 68 = 0x44
	NSString *m_layout;	// 72 = 0x48
	NSMutableArray *m_keyplanes;	// 76 = 0x4c
	NSMutableDictionary *m_keyCache;	// 80 = 0x50
	NSMutableDictionary *m_keysetCache;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x3037e259; 
@property(retain, nonatomic) NSDictionary *keyCache;	// G=0x3037e4c5; S=0x3037e4d5; @synthesize=m_keyCache
@property(retain, nonatomic) NSArray *keyplanes;	// G=0x3037e4a5; S=0x3037e4b5; @synthesize=m_keyplanes
@property(retain, nonatomic) NSMutableDictionary *keysetCache;	// G=0x3037e4e5; S=0x3037e4f5; @synthesize=m_keysetCache
@property(readonly, assign, nonatomic) NSString *layoutName;	// G=0x3037d4e5; 
@property(retain, nonatomic) NSString *name;	// G=0x3037e465; S=0x3037e475; @synthesize=m_name
@property(retain, nonatomic) NSString *visualStyle;	// G=0x3037e485; S=0x3037e495; @synthesize=m_visualStyle
+ (id)keyboard;	// 0x3037d339
- (id)init;	// 0x3037d381
- (id)initWithCoder:(id)coder;	// 0x3037d80d
- (void)addKeyplane:(id)keyplane;	// 0x3037dfc9
// declared property getter: - (id)cacheKey;	// 0x3037e259
- (void)cacheKey:(id)key onKeyplane:(id)keyplane;	// 0x3037d529
- (id)cachedKeysByKeyName:(id)name onKeyplane:(id)keyplane;	// 0x3037d6d5
- (id)currentKeyplanes;	// 0x3037e2b9
- (void)dealloc;	// 0x3037d42d
- (id)description;	// 0x3037dfe9
- (void)encodeWithCoder:(id)coder;	// 0x3037dc91
- (BOOL)isEqual:(id)equal;	// 0x3037dd2d
// declared property getter: - (id)keyCache;	// 0x3037e4c5
- (id)keyplaneForKey:(id)key;	// 0x3037e2c9
- (id)keyplaneWithName:(id)name;	// 0x3037dedd
// declared property getter: - (id)keyplanes;	// 0x3037e4a5
// declared property getter: - (id)keysetCache;	// 0x3037e4e5
- (void)layout;	// 0x3037e095
// declared property getter: - (id)layoutName;	// 0x3037d4e5
- (void)makeLikeOther:(id)other;	// 0x3037dddd
// declared property getter: - (id)name;	// 0x3037e465
// declared property setter: - (void)setKeyCache:(id)cache;	// 0x3037e4d5
// declared property setter: - (void)setKeyplanes:(id)keyplanes;	// 0x3037e4b5
// declared property setter: - (void)setKeysetCache:(id)cache;	// 0x3037e4f5
// declared property setter: - (void)setName:(id)name;	// 0x3037e475
// declared property setter: - (void)setVisualStyle:(id)style;	// 0x3037e495
// declared property getter: - (id)visualStyle;	// 0x3037e485
@end

