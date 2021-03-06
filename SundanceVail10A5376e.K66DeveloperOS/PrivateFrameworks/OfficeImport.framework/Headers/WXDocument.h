/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface WXDocument : NSObject {
}
+ (id)documentFrom:(id)from reader:(id)reader cancel:(id)cancel asThumbnail:(BOOL)thumbnail;	// 0x36fd1451
+ (void)initialize;	// 0x36fd13ad
+ (void)mapDocument:(id)document to:(id)to state:(id)state;	// 0x36fe2edd
+ (void)mapFontTable:(id)table to:(id)to;	// 0x36fd9bd5
+ (void)mapLists:(id)lists to:(id)to state:(id)state;	// 0x36fe085d
+ (void)mapSources:(id)sources to:(id)to state:(id)state;	// 0x370a5751
+ (void)mapStyles:(id)styles to:(id)to state:(id)state;	// 0x36fda0c9
+ (void)readDocumentSettings:(id)settings to:(id)to state:(id)state;	// 0x36fe1f4d
@end

