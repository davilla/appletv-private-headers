/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosCollection : BRPhotoMediaCollection {
	NSDate *_modDate;	// 44 = 0x2c
	NSDate *_lastCheckedDate;	// 48 = 0x30
	NSString *_parentAccountName;	// 52 = 0x34
	NSString *_parentAccountID;	// 56 = 0x38
	NSString *_previewURL;	// 60 = 0x3c
}
@property(retain) NSDate *lastCheckedDate;	// G=0x1a8cd1; S=0x1a8dad; converted property
@property(retain) NSDate *modDate;	// G=0x1a8755; S=0x1a8831; converted property
@property(retain) NSString *parentAccountID;	// G=0x1a8add; S=0x1a8bb9; converted property
@property(retain) NSString *parentAccountName;	// G=0x1a8919; S=0x1a89f5; converted property
@property(retain) NSString *previewURL;	// G=0x1a8f7d; S=0x1a8e95; converted property
- (id)collectionDictionary;	// 0x1a8cc9
- (void)dealloc;	// 0x1a86b5
- (BOOL)isLocal;	// 0x1a8ccd
// converted property getter: - (id)lastCheckedDate;	// 0x1a8cd1
// converted property getter: - (id)modDate;	// 0x1a8755
- (long)numberOfPhotos;	// 0x1a8ca1
// converted property getter: - (id)parentAccountID;	// 0x1a8add
// converted property getter: - (id)parentAccountName;	// 0x1a8919
// converted property getter: - (id)previewURL;	// 0x1a8f7d
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x1a8dad
// converted property setter: - (void)setModDate:(id)date;	// 0x1a8831
// converted property setter: - (void)setParentAccountID:(id)anId;	// 0x1a8bb9
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x1a89f5
// converted property setter: - (void)setPreviewURL:(id)url;	// 0x1a8e95
@end
