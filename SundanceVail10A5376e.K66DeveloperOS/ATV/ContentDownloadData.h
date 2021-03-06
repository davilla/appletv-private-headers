/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableString, NSString, NSMutableData, NSError, CDNDownloadData, NSLock;

@interface ContentDownloadData : XXUnknownSuperclass {
	BOOL ignore;	// 4 = 0x4
	NSLock *lock;	// 8 = 0x8
	CDNDownloadData *cdn;	// 12 = 0xc
	NSString *audioLanguageBCP47;	// 16 = 0x10
	NSString *audioLanguageDescription;	// 20 = 0x14
	NSString *downloadableId;	// 24 = 0x18
	unsigned bitRate;	// 28 = 0x1c
	NSString *trackId;	// 32 = 0x20
	int trackIndex;	// 36 = 0x24
	int streamIndex;	// 40 = 0x28
	unsigned sortedIndex;	// 44 = 0x2c
	int contentProfile;	// 48 = 0x30
	NSString *url;	// 52 = 0x34
	NSString *redirectedUrl;	// 56 = 0x38
	int state;	// 60 = 0x3c
	int error;	// 64 = 0x40
	NSError *nsError;	// 68 = 0x44
	BOOL failed;	// 72 = 0x48
	int httpStatusCode;	// 76 = 0x4c
	int mediaType;	// 80 = 0x50
	double downloadStartTime;	// 84 = 0x54
	double downloadEndTime;	// 92 = 0x5c
	double playlistGenerateStartTime;	// 100 = 0x64
	double playlistGenerateEndTime;	// 108 = 0x6c
	double parseKeyStartTime;	// 116 = 0x74
	double parseKeyEndTime;	// 124 = 0x7c
	NSMutableString *moviePlaylist;	// 132 = 0x84
	NSMutableString *iFramePlaylist;	// 136 = 0x88
	int movieDuration;	// 140 = 0x8c
	int moviePeakBandwidth;	// 144 = 0x90
	int movieAverageBandwidth;	// 148 = 0x94
	NSMutableData *contentHeaderData;	// 152 = 0x98
	int contentChunkStart;	// 156 = 0x9c
	float m3u8ChunkRatio;	// 160 = 0xa0
	NSMutableData *iFrameData;	// 164 = 0xa4
	BOOL isDefault;	// 168 = 0xa8
	int iFrameBandwidth;	// 172 = 0xac
}
@property(readonly, assign, nonatomic) NSString *audioLanguageBCP47;	// G=0x4c18f9; @synthesize
@property(readonly, assign, nonatomic) NSString *audioLanguageDescription;	// G=0x4c1909; @synthesize
@property(readonly, assign, nonatomic) unsigned bitRate;	// G=0x4c1949; @synthesize
@property(readonly, assign, nonatomic) CDNDownloadData *cdn;	// G=0x4c18b9; @synthesize
@property(readonly, assign, nonatomic) int contentChunkStart;	// G=0x4c1be1; @synthesize
@property(readonly, assign, nonatomic) NSMutableData *contentHeaderData;	// G=0x4c1c01; @synthesize
@property(readonly, assign, nonatomic) int contentProfile;	// G=0x4c1979; @synthesize
@property(assign, nonatomic) double downloadEndTime;	// G=0x4c1a75; S=0x4c1a8d; @synthesize
@property(assign, nonatomic) double downloadStartTime;	// G=0x4c1a49; S=0x4c1a61; @synthesize
@property(readonly, assign, nonatomic) NSString *downloadableId;	// G=0x4c18e9; @synthesize
@property(assign, nonatomic) int error;	// G=0x4c19c9; S=0x4c19d9; @synthesize
@property(assign, nonatomic) BOOL failed;	// G=0x4c1a09; S=0x4c1a19; @synthesize
@property(assign, nonatomic) int httpStatusCode;	// G=0x4c1a29; S=0x4c1a39; @synthesize
@property(assign, nonatomic) int iFrameBandwidth;	// G=0x4c1bb1; S=0x4c1bc1; @synthesize
@property(readonly, assign, nonatomic) NSMutableData *iFrameData;	// G=0x4c1c11; @synthesize
@property(assign, nonatomic) BOOL ignore;	// G=0x4c1899; S=0x4c18a9; @synthesize
@property(readonly, assign, nonatomic) BOOL isDefault;	// G=0x4c1919; @synthesize
@property(assign, nonatomic) NSLock *lock;	// G=0x4c18c9; S=0x4c18d9; @synthesize
@property(assign, nonatomic) float m3u8ChunkRatio;	// G=0x4c1c21; S=0x4c1c31; @synthesize
@property(readonly, assign, nonatomic) int mediaType;	// G=0x4c1c41; @synthesize
@property(assign, nonatomic) int movieAverageBandwidth;	// G=0x4c1b91; S=0x4c1ba1; @synthesize
@property(assign, nonatomic) int movieDuration;	// G=0x4c1b51; S=0x4c1b61; @synthesize
@property(assign, nonatomic) int moviePeakBandwidth;	// G=0x4c1b71; S=0x4c1b81; @synthesize
@property(readonly, assign, nonatomic) NSMutableString *moviePlaylist;	// G=0x4c1bd1; @synthesize
@property(retain, nonatomic) NSError *nsError;	// G=0x4c19e9; S=0x4c19f9; @synthesize
@property(assign, nonatomic) double parseKeyEndTime;	// G=0x4c1b25; S=0x4c1b3d; @synthesize
@property(assign, nonatomic) double parseKeyStartTime;	// G=0x4c1af9; S=0x4c1b11; @synthesize
@property(assign, nonatomic) double playlistGenerateEndTime;	// G=0x4c1acd; S=0x4c1ae5; @synthesize
@property(assign, nonatomic) double playlistGenerateStartTime;	// G=0x4c1aa1; S=0x4c1ab9; @synthesize
@property(readonly, assign, nonatomic) NSString *redirectedUrl;	// G=0x4c1999; @synthesize
@property(assign, nonatomic) unsigned sortedIndex;	// G=0x4c1959; S=0x4c1969; @synthesize
@property(assign, nonatomic) int state;	// G=0x4c19a9; S=0x4c19b9; @synthesize
@property(readonly, assign, nonatomic) int streamIndex;	// G=0x4c1939; @synthesize
@property(readonly, assign, nonatomic) NSString *trackId;	// G=0x4c1bf1; @synthesize
@property(readonly, assign, nonatomic) int trackIndex;	// G=0x4c1929; @synthesize
@property(readonly, assign, nonatomic) NSString *url;	// G=0x4c1989; @synthesize
- (id)initWithManifestStream:(const shared_ptr<netflix::ase::ManifestStream> *)manifestStream streamIndex:(int)index trackId:(basic_string<char, std::char_traits<char>, std::allocator<char> >)anId trackIndex:(int)index4 audioBCP47:(id)a47 audioDescription:(id)description isDefault:(BOOL)aDefault cdnData:(id)data;	// 0x4c1031
// declared property getter: - (id)audioLanguageBCP47;	// 0x4c18f9
// declared property getter: - (id)audioLanguageDescription;	// 0x4c1909
// declared property getter: - (unsigned)bitRate;	// 0x4c1949
// declared property getter: - (id)cdn;	// 0x4c18b9
- (int)compareByDescendingBitRate:(id)rate;	// 0x4c1841
// declared property getter: - (int)contentChunkStart;	// 0x4c1be1
// declared property getter: - (id)contentHeaderData;	// 0x4c1c01
// declared property getter: - (int)contentProfile;	// 0x4c1979
- (void)dealloc;	// 0x4c158d
// declared property getter: - (double)downloadEndTime;	// 0x4c1a75
// declared property getter: - (double)downloadStartTime;	// 0x4c1a49
// declared property getter: - (id)downloadableId;	// 0x4c18e9
// declared property getter: - (int)error;	// 0x4c19c9
// declared property getter: - (BOOL)failed;	// 0x4c1a09
// declared property getter: - (int)httpStatusCode;	// 0x4c1a29
// declared property getter: - (int)iFrameBandwidth;	// 0x4c1bb1
// declared property getter: - (id)iFrameData;	// 0x4c1c11
// declared property getter: - (BOOL)ignore;	// 0x4c1899
// declared property getter: - (BOOL)isDefault;	// 0x4c1919
// declared property getter: - (id)lock;	// 0x4c18c9
// declared property getter: - (float)m3u8ChunkRatio;	// 0x4c1c21
// declared property getter: - (int)mediaType;	// 0x4c1c41
// declared property getter: - (int)movieAverageBandwidth;	// 0x4c1b91
// declared property getter: - (int)movieDuration;	// 0x4c1b51
// declared property getter: - (int)moviePeakBandwidth;	// 0x4c1b71
// declared property getter: - (id)moviePlaylist;	// 0x4c1bd1
// declared property getter: - (id)nsError;	// 0x4c19e9
// declared property getter: - (double)parseKeyEndTime;	// 0x4c1b25
// declared property getter: - (double)parseKeyStartTime;	// 0x4c1af9
// declared property getter: - (double)playlistGenerateEndTime;	// 0x4c1acd
// declared property getter: - (double)playlistGenerateStartTime;	// 0x4c1aa1
// declared property getter: - (id)redirectedUrl;	// 0x4c1999
- (void)setContentHeaderData:(id)data withChunkStart:(int)chunkStart;	// 0x4c1709
// declared property setter: - (void)setDownloadEndTime:(double)time;	// 0x4c1a8d
// declared property setter: - (void)setDownloadStartTime:(double)time;	// 0x4c1a61
// declared property setter: - (void)setError:(int)error;	// 0x4c19d9
// declared property setter: - (void)setFailed:(BOOL)failed;	// 0x4c1a19
// declared property setter: - (void)setHttpStatusCode:(int)code;	// 0x4c1a39
// declared property setter: - (void)setIFrameBandwidth:(int)bandwidth;	// 0x4c1bc1
- (void)setIFrameData:(id)data;	// 0x4c16c9
- (void)setIFramePlaylist:(id)playlist;	// 0x4c17a1
// declared property setter: - (void)setIgnore:(BOOL)ignore;	// 0x4c18a9
// declared property setter: - (void)setLock:(id)lock;	// 0x4c18d9
// declared property setter: - (void)setM3u8ChunkRatio:(float)ratio;	// 0x4c1c31
// declared property setter: - (void)setMovieAverageBandwidth:(int)bandwidth;	// 0x4c1ba1
// declared property setter: - (void)setMovieDuration:(int)duration;	// 0x4c1b61
// declared property setter: - (void)setMoviePeakBandwidth:(int)bandwidth;	// 0x4c1b81
- (void)setMoviePlaylist:(id)playlist;	// 0x4c1761
// declared property setter: - (void)setNsError:(id)error;	// 0x4c19f9
// declared property setter: - (void)setParseKeyEndTime:(double)time;	// 0x4c1b3d
// declared property setter: - (void)setParseKeyStartTime:(double)time;	// 0x4c1b11
// declared property setter: - (void)setPlaylistGenerateEndTime:(double)time;	// 0x4c1ae5
// declared property setter: - (void)setPlaylistGenerateStartTime:(double)time;	// 0x4c1ab9
- (void)setRedirectedUrl:(id)url;	// 0x4c17e1
// declared property setter: - (void)setSortedIndex:(unsigned)index;	// 0x4c1969
// declared property setter: - (void)setState:(int)state;	// 0x4c19b9
// declared property getter: - (unsigned)sortedIndex;	// 0x4c1959
// declared property getter: - (int)state;	// 0x4c19a9
// declared property getter: - (int)streamIndex;	// 0x4c1939
// declared property getter: - (id)trackId;	// 0x4c1bf1
// declared property getter: - (int)trackIndex;	// 0x4c1929
// declared property getter: - (id)url;	// 0x4c1989
@end

