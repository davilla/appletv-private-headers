/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVMetadataItem.h"

@class NSDictionary, NSString, NSLocale, AVMutableMetadataItemInternal;
@protocol NSCopying, NSObject;

@interface AVMutableMetadataItem : AVMetadataItem {
	AVMutableMetadataItemInternal *_mutablePriv;	// 8 = 0x8
}
@property(assign) XXStruct_pwHToB duration;	// G=0x3472ed75; S=0x3472ee1d; 
@property(copy) NSDictionary *extraAttributes;	// G=0x3472edbd; S=0x3472f341; 
@property(copy) id<NSCopying, NSObject> key;	// G=0x3472eccd; S=0x3472f4b1; 
@property(copy) NSString *keySpace;	// G=0x3472eced; S=0x3472f449; 
@property(copy) NSLocale *locale;	// G=0x3472ed0d; S=0x3472f3f1; 
@property(assign) XXStruct_pwHToB time;	// G=0x3472ed2d; S=0x3472eddd; 
@property(copy) id<NSCopying, NSObject> value;	// G=0x3472f519; S=0x3472f399; 
+ (id)metadataItem;	// 0x3472f555
- (id)copyWithZone:(NSZone *)zone;	// 0x3472f319
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3472ed75
// declared property getter: - (id)extraAttributes;	// 0x3472edbd
// declared property getter: - (id)key;	// 0x3472eccd
// declared property getter: - (id)keySpace;	// 0x3472eced
// declared property getter: - (id)locale;	// 0x3472ed0d
// declared property setter: - (void)setDuration:(XXStruct_pwHToB)duration;	// 0x3472ee1d
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x3472f341
// declared property setter: - (void)setKey:(id)key;	// 0x3472f4b1
// declared property setter: - (void)setKeySpace:(id)space;	// 0x3472f449
// declared property setter: - (void)setLocale:(id)locale;	// 0x3472f3f1
// declared property setter: - (void)setTime:(XXStruct_pwHToB)time;	// 0x3472eddd
// declared property setter: - (void)setValue:(id)value;	// 0x3472f399
// declared property getter: - (XXStruct_pwHToB)time;	// 0x3472ed2d
// declared property getter: - (id)value;	// 0x3472f519
@end

