/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSGAppProfile : PBCodable {
	NSString *_appName;	// 4 = 0x4
	NSString *_appKey;	// 8 = 0x8
	BOOL _hasRequestType;	// 12 = 0xc
	int _requestType;	// 16 = 0x10
	BOOL _hasSearchType;	// 20 = 0x14
	int _searchType;	// 24 = 0x18
	NSString *_searchTerm;	// 28 = 0x1c
	BOOL _hasZoomLevel;	// 32 = 0x20
	int _zoomLevel;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *appKey;	// G=0x30b75f49; S=0x30b75f59; @synthesize=_appKey
@property(retain, nonatomic) NSString *appName;	// G=0x30b75f15; S=0x30b75f25; @synthesize=_appName
@property(readonly, assign, nonatomic) BOOL hasAppKey;	// G=0x30b759e1; 
@property(readonly, assign, nonatomic) BOOL hasAppName;	// G=0x30b759c9; 
@property(assign, nonatomic) BOOL hasRequestType;	// G=0x30b75f7d; S=0x30b75f8d; @synthesize=_hasRequestType
@property(readonly, assign, nonatomic) BOOL hasSearchTerm;	// G=0x30b75a41; 
@property(assign, nonatomic) BOOL hasSearchType;	// G=0x30b75fad; S=0x30b75fbd; @synthesize=_hasSearchType
@property(assign, nonatomic) BOOL hasZoomLevel;	// G=0x30b76011; S=0x30b76021; @synthesize=_hasZoomLevel
@property(assign, nonatomic) int requestType;	// G=0x30b75f9d; S=0x30b759f9; @synthesize=_requestType
@property(retain, nonatomic) NSString *searchTerm;	// G=0x30b75fdd; S=0x30b75fed; @synthesize=_searchTerm
@property(assign, nonatomic) int searchType;	// G=0x30b75fcd; S=0x30b75a1d; @synthesize=_searchType
@property(assign, nonatomic) int zoomLevel;	// G=0x30b76031; S=0x30b75a59; @synthesize=_zoomLevel
// declared property getter: - (id)appKey;	// 0x30b75f49
// declared property getter: - (id)appName;	// 0x30b75f15
- (void)dealloc;	// 0x30b7595d
- (id)description;	// 0x30b75a7d
- (id)dictionaryRepresentation;	// 0x30b75aed
// declared property getter: - (BOOL)hasAppKey;	// 0x30b759e1
// declared property getter: - (BOOL)hasAppName;	// 0x30b759c9
// declared property getter: - (BOOL)hasRequestType;	// 0x30b75f7d
// declared property getter: - (BOOL)hasSearchTerm;	// 0x30b75a41
// declared property getter: - (BOOL)hasSearchType;	// 0x30b75fad
// declared property getter: - (BOOL)hasZoomLevel;	// 0x30b76011
- (BOOL)readFrom:(id)from;	// 0x30b75ca1
// declared property getter: - (int)requestType;	// 0x30b75f9d
// declared property getter: - (id)searchTerm;	// 0x30b75fdd
// declared property getter: - (int)searchType;	// 0x30b75fcd
// declared property setter: - (void)setAppKey:(id)key;	// 0x30b75f59
// declared property setter: - (void)setAppName:(id)name;	// 0x30b75f25
// declared property setter: - (void)setHasRequestType:(BOOL)type;	// 0x30b75f8d
// declared property setter: - (void)setHasSearchType:(BOOL)type;	// 0x30b75fbd
// declared property setter: - (void)setHasZoomLevel:(BOOL)level;	// 0x30b76021
// declared property setter: - (void)setRequestType:(int)type;	// 0x30b759f9
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x30b75fed
// declared property setter: - (void)setSearchType:(int)type;	// 0x30b75a1d
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x30b75a59
- (void)writeTo:(id)to;	// 0x30b75e05
// declared property getter: - (int)zoomLevel;	// 0x30b76031
@end

