/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMEnhancedContent : PBCodable {
@private
	NSString *_source;	// 4 = 0x4
	NSMutableArray *_keys;	// 8 = 0x8
	NSMutableArray *_values;	// 12 = 0xc
	NSString *_url;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *keys;	// G=0x32b8db29; S=0x32b8e279; @synthesize=_keys
@property(readonly, assign, nonatomic) int keysCount;	// G=0x32b8e1ad; 
@property(retain, nonatomic) NSString *source;	// G=0x32b8db39; S=0x32b8e251; @synthesize=_source
@property(retain, nonatomic) NSString *url;	// G=0x32b8db09; S=0x32b8e2c9; @synthesize=_url
@property(retain, nonatomic) NSMutableArray *values;	// G=0x32b8db19; S=0x32b8e2a1; @synthesize=_values
@property(readonly, assign, nonatomic) int valuesCount;	// G=0x32b8e08d; 
- (id)init;	// 0x32b8db49
- (void)addKey:(id)key;	// 0x32b8e0b1
- (void)addValue:(id)value;	// 0x32b8df91
- (void)dealloc;	// 0x32b8e1d1
- (id)description;	// 0x32b84cd5
- (id)description;	// 0x32b8dc15
- (id)dictionaryRepresentation;	// 0x32b8db75
- (id)keyAtIndex:(unsigned)index;	// 0x32b8e0e1
// declared property getter: - (id)keys;	// 0x32b8db29
// declared property getter: - (int)keysCount;	// 0x32b8e1ad
- (BOOL)readFrom:(id)from;	// 0x32b8de29
- (void)setKey:(id)key atIndex:(unsigned)index;	// 0x32b8e145
// declared property setter: - (void)setKeys:(id)keys;	// 0x32b8e279
// declared property setter: - (void)setSource:(id)source;	// 0x32b8e251
// declared property setter: - (void)setUrl:(id)url;	// 0x32b8e2c9
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x32b8e025
// declared property setter: - (void)setValues:(id)values;	// 0x32b8e2a1
// declared property getter: - (id)source;	// 0x32b8db39
// declared property getter: - (id)url;	// 0x32b8db09
- (id)valueAtIndex:(unsigned)index;	// 0x32b8dfc1
// declared property getter: - (id)values;	// 0x32b8db19
// declared property getter: - (int)valuesCount;	// 0x32b8e08d
- (void)writeTo:(id)to;	// 0x32b8dd5d
@end

