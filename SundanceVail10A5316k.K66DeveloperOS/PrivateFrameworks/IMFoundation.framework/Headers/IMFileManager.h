/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSFileManager.h> // Unknown library


@interface IMFileManager : NSFileManager {
}
+ (id)defaultHFSFileManager;	// 0x34a77e0d
+ (id)defaultManager;	// 0x34a77dfd
- (id)MIMETypeOfPath:(id)path;	// 0x34a78281
- (id)MIMETypeOfPathExtension:(id)pathExtension;	// 0x34a78219
- (id)UTITypeOfPath:(id)path;	// 0x34a78305
- (id)UTITypeOfPathExtension:(id)pathExtension;	// 0x34a783c9
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x34a7802d
- (id)createTempFileBasedOnName:(id)name hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags;	// 0x34a77eb9
- (id)displayNameOfFileWithName:(id)name hfsFlags:(unsigned short)flags;	// 0x34a78151
- (BOOL)existingPath:(id)path toFSRef:(void *)fsref;	// 0x34a78025
- (BOOL)existingPath:(id)path toFSSpec:(void *)fsspec;	// 0x34a78029
- (id)kindStringForFile:(id)file;	// 0x34a78099
- (id)kindStringForFileWithName:(id)name hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags;	// 0x34a780f1
- (id)pathExtensionForMIMEType:(id)mimetype;	// 0x34a781a9
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x34a7805d
@end

