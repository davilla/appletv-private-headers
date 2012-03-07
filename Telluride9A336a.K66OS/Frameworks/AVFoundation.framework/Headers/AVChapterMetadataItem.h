/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMetadataItem.h"
#import "AVFoundation-Structs.h"

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
	AVChapterMetadataItemInternal *_privChapter;	// 8 = 0x8
}
- (id)init;	// 0x3143e9dd
- (void)_addFigAssetNotifications;	// 0x31440089
- (long)_chapterGroupIndex;	// 0x3143d9d1
- (long)_chapterIndex;	// 0x3143d9f1
- (void)_ensureValueLoadedSync;	// 0x3143f715
- (id)_initWithAsset:(id)asset chapterGroupIndex:(long)index chapterIndex:(long)index3 chapterType:(id)type locale:(id)locale time:(XXStruct_pwHToB)time duration:(XXStruct_pwHToB)duration;	// 0x314401dd
- (void)_removeFigAssetNotifications;	// 0x3143ff49
- (void)_setValueStatus:(int)status figErrorCode:(long)code;	// 0x3143f7fd
- (void)_takeValueFrom:(id)from;	// 0x3143fa29
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)keyDependsOnMetadataValue;	// 0x3143f2fd
- (int)_valueStatus;	// 0x3143f9a5
- (void)cancelLoading;	// 0x3143ed71
- (id)commonKey;	// 0x3143d911
- (id)copyWithZone:(NSZone *)zone;	// 0x3143ea39
- (void)dealloc;	// 0x3143fe31
- (id)description;	// 0x3143fc4d
- (XXStruct_pwHToB)duration;	// 0x3143d999
- (id)extraAttributes;	// 0x3143f4a1
- (void)finalize;	// 0x3143fda9
- (id)key;	// 0x3143d8f1
- (id)keySpace;	// 0x3143d931
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3143f515
- (id)locale;	// 0x3143d941
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3143ea49
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3143f6ad
- (XXStruct_pwHToB)time;	// 0x3143d961
- (id)value;	// 0x3143eba1
@end
