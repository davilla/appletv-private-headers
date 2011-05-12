/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSData, NSMutableDictionary;

@interface MLPhotoBakedThumbnailsCollection : NSObject {
@private
	NSData *_data;	// 4 = 0x4
	NSMutableDictionary *_bakedThumbnails;	// 8 = 0x8
}
+ (void)setTesting:(BOOL)testing;	// 0x333eae75
- (id)init;	// 0x333eb0e1
- (id)initWithContentsOfFile:(id)file;	// 0x333eb155
- (void)_parseDataWithContentsOfFile:(id)file;	// 0x333eb6c5
- (id)availableFormats;	// 0x333eb0c1
- (id)bakedThumbnailsForFormat:(int)format;	// 0x333eaf79
- (void)dealloc;	// 0x333eb0f9
- (void)saveToFile:(id)file;	// 0x333eb199
- (void)setBakedThumbnails:(id)thumbnails forFormat:(int)format;	// 0x333eae81
@end

