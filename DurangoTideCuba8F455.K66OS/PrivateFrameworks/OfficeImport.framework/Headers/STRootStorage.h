/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "STStorage.h"
#import "OfficeImport-Structs.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface STRootStorage : STStorage {
@private
	RootStorage *m_pCRoot;	// 8 = 0x8
	NSMutableData *m_StorageData;	// 12 = 0xc
	void *m_pvBuf;	// 16 = 0x10
}
- (id)initWithMutableData:(id)mutableData andMode:(int)mode;	// 0x32d9fff9
- (id)initWithName:(id)name andMode:(int)mode;	// 0x32d9ff0d
- (void)dealloc;	// 0x32da0191
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type;	// 0x32d9fe71
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type throwOnError:(BOOL)error;	// 0x32da0275
- (long)getLongDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x32da0491
- (short)getShortDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x32da03a1
- (id)getStringDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x32da0575
- (void *)resizeStorageBuffer:(unsigned long)buffer;	// 0x32d9fe9d
- (void)setBlobDocumentPropertyWithId:(int)anId to:(void *)to givenPropStream:(int)stream;	// 0x32d9fd81
- (void)setDefaultDocumentProperties;	// 0x32da0801
- (void)setDocumentProperty:(int)property withId:(int)anId AndType:(int)type AndValue:(void *)value;	// 0x32da0785
- (void)setLongDocumentPropertyWithId:(int)anId to:(long)to givenPropStream:(int)stream;	// 0x32d9fdd5
- (void)setShortDocumentPropertyWithId:(int)anId to:(short)to givenPropStream:(int)stream;	// 0x32d9fda9
- (void)setStringDocumentPropertyWithId:(int)anId to:(id)to givenPropStream:(int)stream;	// 0x32d9fe01
@end

