Pod::Spec.new do |s|
  s.name         = "OpmSDK"
  s.version      = "1.0.0"
  s.summary      = "OpmSDK for iOS"
  s.description  = "OpmSDK"
  s.homepage     = "https://github.com/henujianye/OpmSDK.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "neolix" => "wangjianye@neolix.ai" }
  s.platform     = :ios, "13.0"
  s.source = { :git => 'https://github.com/henujianye/OpmSDK.git', :branch => 'main' }
  # 指定 xcframework
  s.vendored_frameworks = "OpmSDK.xcframework"
  s.resources = 'OpmSDK.bundle'

  # 如果 SDK 依赖第三方 Pods
  s.dependency "MJRefresh"
  s.dependency "AFNetworking"
  s.dependency "SDWebImage"
  s.dependency "SDWebImageWebPCoder"
  s.dependency "Masonry"
  s.dependency "MJExtension"
  
  s.dependency "AMap3DMap-NO-IDFA"
  s.dependency "AMapLocation-NO-IDFA"
  s.dependency "AMapSearch-NO-IDFA"

  s.dependency "WebRTC-SDK", '=137.7151.01'
  s.dependency "CocoaAsyncSocket", '~> 7.6.5'
  s.dependency "CocoaLumberjack"
  
  s.static_framework = true

end
