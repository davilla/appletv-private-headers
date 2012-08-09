/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSNumber;

@interface DAStatusReport : NSObject {
	NSString *_persistentUUID;	// 4 = 0x4
	NSString *_displayName;	// 8 = 0x8
	NSString *_accountType;	// 12 = 0xc
	NSNumber *_timeSpan;	// 16 = 0x10
	NSNumber *_timeInNetworking;	// 20 = 0x14
	NSNumber *_averageHBI;	// 24 = 0x18
	NSNumber *_successfulRequests;	// 28 = 0x1c
	NSNumber *_failedNetworkRequests;	// 32 = 0x20
	NSNumber *_failedProtocolRequests;	// 36 = 0x24
	NSNumber *_downloadedElements;	// 40 = 0x28
	NSNumber *_falseMoreAvailableCount;	// 44 = 0x2c
	NSDate *_creationDate;	// 48 = 0x30
	int _numHBIDataPoints;	// 52 = 0x34
}
@property(retain) NSString *accountType;	// G=0x3413903d; S=0x34139051; @synthesize=_accountType
@property(retain) NSNumber *averageHBI;	// G=0x34139095; S=0x341390a9; @synthesize=_averageHBI
@property(retain) NSString *displayName;	// G=0x34139019; S=0x3413902d; @synthesize=_displayName
@property(retain) NSNumber *downloadedElements;	// G=0x34139125; S=0x34139139; @synthesize=_downloadedElements
@property(retain) NSNumber *failedNetworkRequests;	// G=0x341390dd; S=0x341390f1; @synthesize=_failedNetworkRequests
@property(retain) NSNumber *failedProtocolRequests;	// G=0x34139101; S=0x34139115; @synthesize=_failedProtocolRequests
@property(retain) NSNumber *falseMoreAvailableCount;	// G=0x34139149; S=0x3413915d; @synthesize=_falseMoreAvailableCount
@property(retain) NSString *persistentUUID;	// G=0x34138ff5; S=0x34139009; @synthesize=_persistentUUID
@property(retain) NSNumber *successfulRequests;	// G=0x341390b9; S=0x341390cd; @synthesize=_successfulRequests
@property(retain) NSNumber *timeInNetworking;	// G=0x34139071; S=0x34139085; @synthesize=_timeInNetworking
@property(retain, nonatomic) NSNumber *timeSpan;	// G=0x34138c55; S=0x34139061; @synthesize=_timeSpan
- (id)init;	// 0x341380ad
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x34138119
// declared property getter: - (id)accountType;	// 0x3413903d
// declared property getter: - (id)averageHBI;	// 0x34139095
- (void)dealloc;	// 0x34138315
- (id)description;	// 0x34138bed
- (id)dictionaryRepresentation;	// 0x34138441
// declared property getter: - (id)displayName;	// 0x34139019
// declared property getter: - (id)downloadedElements;	// 0x34139125
// declared property getter: - (id)failedNetworkRequests;	// 0x341390dd
// declared property getter: - (id)failedProtocolRequests;	// 0x34139101
// declared property getter: - (id)falseMoreAvailableCount;	// 0x34139149
- (void)mergeStatusReport:(id)report;	// 0x34138715
- (void)noteFailedNetworkRequest;	// 0x34138dbd
- (void)noteFailedProtocolRequest;	// 0x34138e1d
- (void)noteFalseMoreAvailableResponse;	// 0x34138f95
- (void)noteNewHBIDataPoint:(int)point;	// 0x34138e7d
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)numDownloadedElements;	// 0x34138d05
- (void)noteTimeSpentInNetworking:(double)networking;	// 0x34138f19
// declared property getter: - (id)persistentUUID;	// 0x34138ff5
// declared property setter: - (void)setAccountType:(id)type;	// 0x34139051
// declared property setter: - (void)setAverageHBI:(id)hbi;	// 0x341390a9
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3413902d
// declared property setter: - (void)setDownloadedElements:(id)elements;	// 0x34139139
// declared property setter: - (void)setFailedNetworkRequests:(id)requests;	// 0x341390f1
// declared property setter: - (void)setFailedProtocolRequests:(id)requests;	// 0x34139115
// declared property setter: - (void)setFalseMoreAvailableCount:(id)count;	// 0x3413915d
// declared property setter: - (void)setPersistentUUID:(id)uuid;	// 0x34139009
// declared property setter: - (void)setSuccessfulRequests:(id)requests;	// 0x341390cd
// declared property setter: - (void)setTimeInNetworking:(id)networking;	// 0x34139085
// declared property setter: - (void)setTimeSpan:(id)span;	// 0x34139061
// declared property getter: - (id)successfulRequests;	// 0x341390b9
// declared property getter: - (id)timeInNetworking;	// 0x34139071
// declared property getter: - (id)timeSpan;	// 0x34138c55
@end
