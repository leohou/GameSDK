Pod::Spec.new do |s|
  s.name = "GameSDK"
  s.version = "1.0"
  s.summary = "GameSDK"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"wesaiPublic"=>"app@wesai.com"}
  s.homepage = "https://github.com/leohou/GameSDK.git"
  s.description = "TODO: Add long description of the pod here."
  s.frameworks = ["UIKit", "Foundation", "CoreTelephony", "SystemConfiguration", "CoreGraphics", "AdSupport", "Security", "WebKit"]
  s.xcconfig = {"OTHER_LDFLAGS"=>"-ObjC"}
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
      #依赖关系，该项目所依赖的其他库，如果有多个需要填写多个s.dependency
    #s.dependency 'FBSDKShareKit'
    #s.dependency 'FBSDKLoginKit'
    #s.dependency 'Google-Mobile-Ads-SDK'
  s.ios.vendored_framework  = 'GameSDK.framework'
  #pod上使用xcassets 这个图片打包会出问题
s.resource=['ios/Resource/**/*.{xib,cer}']
end
