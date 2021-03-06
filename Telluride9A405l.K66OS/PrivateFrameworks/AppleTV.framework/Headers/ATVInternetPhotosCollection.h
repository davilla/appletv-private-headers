/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaCollection.h"

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosCollection : BRPhotoMediaCollection {
@private
	NSDate *_modDate;	// 44 = 0x2c
	NSDate *_lastCheckedDate;	// 48 = 0x30
	NSString *_parentAccountName;	// 52 = 0x34
	NSString *_parentAccountID;	// 56 = 0x38
	NSString *_previewURL;	// 60 = 0x3c
}
@property(retain) NSDate *lastCheckedDate;	// G=0x35cdc9a9; S=0x35cdca75; converted property
@property(retain) NSDate *modDate;	// G=0x35cdc4a5; S=0x35cdc571; converted property
@property(retain) NSString *parentAccountID;	// G=0x35cdc7dd; S=0x35cdc8a9; converted property
@property(retain) NSString *parentAccountName;	// G=0x35cdc641; S=0x35cdc70d; converted property
@property(retain) NSString *previewURL;	// G=0x35cdcc15; S=0x35cdcb45; converted property
- (id)collectionDictionary;	// 0x35cdc9a1
- (void)dealloc;	// 0x35cdc409
- (BOOL)isLocal;	// 0x35cdc9a5
// converted property getter: - (id)lastCheckedDate;	// 0x35cdc9a9
// converted property getter: - (id)modDate;	// 0x35cdc4a5
- (long)numberOfPhotos;	// 0x35cdc979
// converted property getter: - (id)parentAccountID;	// 0x35cdc7dd
// converted property getter: - (id)parentAccountName;	// 0x35cdc641
// converted property getter: - (id)previewURL;	// 0x35cdcc15
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x35cdca75
// converted property setter: - (void)setModDate:(id)date;	// 0x35cdc571
// converted property setter: - (void)setParentAccountID:(id)anId;	// 0x35cdc8a9
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x35cdc70d
// converted property setter: - (void)setPreviewURL:(id)url;	// 0x35cdcb45
@end

