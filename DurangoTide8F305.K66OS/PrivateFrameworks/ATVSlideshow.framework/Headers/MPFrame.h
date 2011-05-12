/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MPSlide, NSMutableDictionary, MPFrameInternal;

@interface MPFrame : NSObject <NSCoding, NSCopying> {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	MPSlide *_parentSlide;	// 8 = 0x8
	MPFrameInternal *_internal;	// 12 = 0xc
}
@property(retain) id frameID;	// G=0x33242cf9; S=0x33242d19; converted property
@property(retain) MPSlide *parentSlide;	// G=0x332431a9; S=0x332432dd; converted property
@property(retain) id presetID;	// G=0x33242e05; S=0x33242e35; converted property
+ (id)frameWithFrameID:(id)frameID;	// 0x332428bd
- (id)init;	// 0x33242945
- (id)initWithCoder:(id)coder;	// 0x33242b95
- (id)initWithFrameID:(id)frameID;	// 0x332428f1
- (void)copyStruct:(id)aStruct;	// 0x3324323d
- (id)copyWithZone:(NSZone *)zone;	// 0x332429f1
- (void)dealloc;	// 0x33242c89
- (id)description;	// 0x33242a51
- (void)dump;	// 0x332431b9
- (void)encodeWithCoder:(id)coder;	// 0x33242ab1
- (id)frameAttributeForKey:(id)key;	// 0x33242ffd
- (id)frameAttributes;	// 0x33242f81
// converted property getter: - (id)frameID;	// 0x33242cf9
- (id)fullDebugLog;	// 0x332431dd
- (id)parentDocument;	// 0x33243219
// converted property getter: - (id)parentSlide;	// 0x332431a9
// converted property getter: - (id)presetID;	// 0x33242e05
- (void)recreateWithSlide:(id)slide;	// 0x3324344d
- (void)setFrameAttribute:(id)attribute forKey:(id)key;	// 0x33243025
// converted property setter: - (void)setFrameID:(id)anId;	// 0x33242d19
// converted property setter: - (void)setParentSlide:(id)slide;	// 0x332432dd
// converted property setter: - (void)setPresetID:(id)anId;	// 0x33242e35
@end

