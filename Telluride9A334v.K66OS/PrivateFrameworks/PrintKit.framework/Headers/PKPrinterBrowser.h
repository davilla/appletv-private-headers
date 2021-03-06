/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSFileHandle, NSMutableArray;
@protocol PKPrinterBrowserDelegate;

@interface PKPrinterBrowser : NSObject {
	id<PKPrinterBrowserDelegate> delegate;	// 4 = 0x4
@private
	DNSServiceRef_tRef mainBrowserRef;	// 8 = 0x8
	DNSServiceRef_tRef ippBrowserRef;	// 12 = 0xc
	DNSServiceRef_tRef ippsBrowserRef;	// 16 = 0x10
	DNSServiceRef_tRef localippBrowserRef;	// 20 = 0x14
	DNSServiceRef_tRef localippsBrowserRef;	// 24 = 0x18
	NSMutableDictionary *printers;	// 28 = 0x1c
	NSMutableDictionary *printersByUUID;	// 32 = 0x20
	NSFileHandle *handle;	// 36 = 0x24
	unsigned char originalCellFlag;	// 40 = 0x28
	unsigned char originalWifiFlag;	// 41 = 0x29
	dispatch_queue_s *printersQueue;	// 44 = 0x2c
	NSMutableArray *pendingList;	// 48 = 0x30
}
@property(assign, nonatomic) id<PKPrinterBrowserDelegate> delegate;	// G=0x317ed00d; S=0x317ed01d; @synthesize
@property(retain, nonatomic) NSFileHandle *handle;	// G=0x317ecffd; S=0x317ed6a9; @synthesize
@property(retain, nonatomic) NSMutableArray *pendingList;	// G=0x317ecfcd; S=0x317ed6f9; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printers;	// G=0x317ecfed; S=0x317ed6d1; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printersByUUID;	// G=0x317ecfbd; S=0x317ed721; @synthesize
@property(readonly, assign, nonatomic) dispatch_queue_s *printersQueue;	// G=0x317ecfdd; @synthesize
+ (id)browserWithDelegate:(id)delegate;	// 0x317ed661
- (id)initWithDelegate:(id)delegate;	// 0x317ededd
- (void)addBlockToPendingList:(id)pendingList;	// 0x317edae5
- (void)addLimboPrinter:(id)printer local:(BOOL)local;	// 0x317edc45
- (void)addQueryResult:(id)result toPrinter:(id)printer;	// 0x317ed23d
- (void)browseCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x317ed9dd
- (void)browseLocalCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x317ed8d5
- (void)dealloc;	// 0x317edd75
// declared property getter: - (id)delegate;	// 0x317ed00d
// declared property getter: - (id)handle;	// 0x317ecffd
- (void)handleNotification:(id)notification;	// 0x317ed749
// declared property getter: - (id)pendingList;	// 0x317ecfcd
// declared property getter: - (id)printers;	// 0x317ecfed
// declared property getter: - (id)printersByUUID;	// 0x317ecfbd
// declared property getter: - (dispatch_queue_s *)printersQueue;	// 0x317ecfdd
- (void)queryCallback:(int)callback flags:(unsigned)flags fullName:(const char *)name rdlen:(unsigned short)rdlen rdata:(const void *)rdata;	// 0x317ed789
- (void)reissueTXTQuery:(id)query;	// 0x317edbc9
- (void)removePrinter:(id)printer;	// 0x317ed0ad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x317ed01d
// declared property setter: - (void)setHandle:(id)handle;	// 0x317ed6a9
// declared property setter: - (void)setPendingList:(id)list;	// 0x317ed6f9
// declared property setter: - (void)setPrinters:(id)printers;	// 0x317ed6d1
// declared property setter: - (void)setPrintersByUUID:(id)uuid;	// 0x317ed721
@end

