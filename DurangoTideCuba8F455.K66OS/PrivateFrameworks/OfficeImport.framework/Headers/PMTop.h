/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OIProgressiveReaderDelegate.h"

@class CMArchiveManager, PMPresentationMapper, PMState;

__attribute__((visibility("hidden")))
@interface PMTop : NSObject <OIProgressiveReaderDelegate> {
@private
	CMArchiveManager *_archiver;	// 4 = 0x4
	PMState *_state;	// 8 = 0x8
	PMPresentationMapper *_mapper;	// 12 = 0xc
	BOOL _xml;	// 16 = 0x10
}
+ (void)fillHTMLArchiveForPowerPointData:(id)powerPointData fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x32cc985d
+ (void)fillHTMLArchiveForPowerPointFile:(id)powerPointFile xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x32be3f1d
+ (void)fillHTMLArchiveForPowerPointFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x32be3f4d
- (void)dealloc;	// 0x32bab609
- (BOOL)isCancelled;	// 0x32cc9831
- (void)readData:(id)data fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x32cc9835
- (void)readFile:(id)file xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x32be4095
- (void)readFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x32be40bd
- (void)readerDidEndDocument:(id)reader;	// 0x32ba75d5
- (void)readerDidReadElement:(id)reader atIndex:(unsigned)index inDocument:(id)document isLastElement:(BOOL)element;	// 0x32b96981
- (void)readerDidStartDocument:(id)reader withElementCount:(int)elementCount;	// 0x32bf67ad
@end

