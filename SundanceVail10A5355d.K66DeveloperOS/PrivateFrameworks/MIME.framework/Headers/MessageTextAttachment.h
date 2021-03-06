/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MessageFileWrapper;

@interface MessageTextAttachment : NSObject {
	NSMutableDictionary *_cache;	// 4 = 0x4
}
@property(retain, nonatomic) MessageFileWrapper *fileWrapper;	// G=0x373dd511; S=0x373dd52d; 
@property(retain) id mimePart;	// G=0x373ddbbd; S=0x373ddbd9; converted property
+ (unsigned)precedenceLevel;	// 0x373dd801
- (id)init;	// 0x373dd251
- (id)initWithWrapper:(id)wrapper;	// 0x373dd2b5
- (unsigned)approximateSize;	// 0x373dd549
- (id)cachedValueForKey:(id)key;	// 0x373dd3ed
- (void)dealloc;	// 0x373dd339
- (id)description;	// 0x373dd385
- (void)download;	// 0x373dd731
// declared property getter: - (id)fileWrapper;	// 0x373dd511
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x373dd7b1
- (BOOL)hasBeenDownloaded;	// 0x373dd709
- (void)inlineDisplayData:(id *)data mimeType:(id *)type;	// 0x373dd75d
- (BOOL)isPlaceholder;	// 0x373dd735
// converted property getter: - (id)mimePart;	// 0x373ddbbd
- (BOOL)needsRedownload;	// 0x373dd72d
- (id)persistentUniqueIdentifier;	// 0x373dd7fd
- (void)setCachedValue:(id)value forKey:(id)key;	// 0x373dd461
// declared property setter: - (void)setFileWrapper:(id)wrapper;	// 0x373dd52d
// converted property setter: - (void)setMimePart:(id)part;	// 0x373ddbd9
- (BOOL)shouldDownloadAttachmentOnDisplay;	// 0x373ddbf5
- (id)textEncodingGuess;	// 0x373ddbf9
- (id)textEncodingNameForData:(id)data mimeType:(id)type;	// 0x373ddbfd
@end

