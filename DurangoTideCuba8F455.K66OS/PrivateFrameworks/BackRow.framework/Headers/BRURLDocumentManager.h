/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, BRAsyncTaskContext;

@interface BRURLDocumentManager : NSObject {
@private
	NSMutableArray *_activeDocuments;	// 4 = 0x4
	NSMutableArray *_queue;	// 8 = 0x8
	BRAsyncTaskContext *_taskContext;	// 12 = 0xc
}
+ (void)_processCompleteDocuments:(id)documents;	// 0x32fdf145
+ (void)initialize;	// 0x32f1f86d
+ (id)textDocumentManager;	// 0x32f1f8f5
- (id)init;	// 0x32f1f9b5
- (void)_documentComplete:(id)complete;	// 0x32fde701
- (void)_processLoadDocument:(id)document;	// 0x32fdeef5
- (void)_removeActiveDocument:(id)document;	// 0x32fde7c1
- (id)_synchronizationObject;	// 0x32fddc59
- (void)cancelLoad:(id)load;	// 0x32fde875
- (void)dealloc;	// 0x32fde4ad
- (void)loadDocument:(id)document;	// 0x32f1fdb1
- (void)purgeDocuments;	// 0x32fde999
@end

