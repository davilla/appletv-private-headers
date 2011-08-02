/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class AVMetadataItemInternal, NSData, NSString, NSDictionary, NSLocale, NSNumber, NSDate;
@protocol NSObject;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
	AVMetadataItemInternal *_priv;	// 4 = 0x4
}
@property(readonly, copy) NSString *commonKey;	// G=0x3256e729; 
@property(readonly, assign) NSData *dataValue;	// G=0x3256ec95; 
@property(readonly, assign) NSDate *dateValue;	// G=0x3256ed05; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x3256dc71; 
@property(readonly, copy) NSDictionary *extraAttributes;	// G=0x3256e591; 
@property(readonly, copy) id<NSCopying, NSObject> key;	// G=0x3256e769; 
@property(readonly, copy) NSString *keySpace;	// G=0x3256e6e9; 
@property(readonly, copy) NSLocale *locale;	// G=0x3256e6a9; 
@property(readonly, assign) NSNumber *numberValue;	// G=0x32570b71; 
@property(readonly, assign) NSString *stringValue;	// G=0x3256edf5; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x3256e62d; 
@property(readonly, copy) id<NSCopying, NSObject> value;	// G=0x3256e5d1; 
+ (id)_figMetadataPropertyFromMetadataItems:(id)metadataItems;	// 0x3256fc79
+ (id)metadataItemsFromArray:(id)array withKey:(id)key keySpace:(id)space;	// 0x3256eb8d
+ (id)metadataItemsFromArray:(id)array withLocale:(id)locale;	// 0x3256ebf1
- (id)init;	// 0x3256f465
- (void)_extractPropertiesFromDictionary:(id)dictionary;	// 0x3256eeed
- (id)_figMetadataDictionary;	// 0x3256e8a5
- (id)_figMetadataFormat;	// 0x3256e7a9
- (id)_initWithFigMetadataDictionary:(id)figMetadataDictionary;	// 0x3256eb61
- (id)_initWithReader:(OpaqueFigMetadataReader *)reader itemIndex:(long)index;	// 0x3256f411
- (id)_keyAsString;	// 0x3256f12d
- (void)_makePropertiesReady;	// 0x32570cf9
- (void)_makeValueReady;	// 0x32570c81
- (void)_updateCommonKey;	// 0x3256ee9d
- (void)cancelLoading;	// 0x3256dcc9
// declared property getter: - (id)commonKey;	// 0x3256e729
- (id)copyWithZone:(NSZone *)zone;	// 0x3256eb39
// declared property getter: - (id)dataValue;	// 0x3256ec95
// declared property getter: - (id)dateValue;	// 0x3256ed05
- (void)dealloc;	// 0x3256f681
- (id)description;	// 0x32570d89
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3256dc71
// declared property getter: - (id)extraAttributes;	// 0x3256e591
- (void)finalize;	// 0x3256f625
- (unsigned)hash;	// 0x32570f01
- (CGImageRef)imageValue;	// 0x3256dc6d
- (BOOL)isEqual:(id)equal;	// 0x3256f761
// declared property getter: - (id)key;	// 0x3256e769
// declared property getter: - (id)keySpace;	// 0x3256e6e9
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3256dcbd
// declared property getter: - (id)locale;	// 0x3256e6a9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3256e9b9
// declared property getter: - (id)numberValue;	// 0x32570b71
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3256dcb9
// declared property getter: - (id)stringValue;	// 0x3256edf5
// declared property getter: - (XXStruct_pwHToB)time;	// 0x3256e62d
// declared property getter: - (id)value;	// 0x3256e5d1
@end

