#include <diff.hh>

extern "C" int LLVMFuzzerTestOneInput(uint8_t const *data, size_t size_data) {
    Kakoune::find_diff((const char*)data, size_data, "Quos animi ut officia quia. Iste ut quisquam placeat quia. Exercitationem culpa et placeat et aut enim.\
Voluptates odit possimus sed dignissimos dicta. Alias nihil iure numquam voluptas autem harum. Totam sed et officia sint ut consectetur mollitia praesentium. Molestiae et ipsam animi molestias assumenda dolorum laborum. Aspernatur architecto autem est occaecati explicabo porro.\
Corporis libero perspiciatis corrupti. Quis qui exercitationem voluptas vel et et aliquam fugiat. Dignissimos voluptates adipisci sed aperiam odit dolorem quo. Esse quis voluptas voluptas officia sunt esse dignissimos consequuntur. Doloribus laborum praesentium voluptas aspernatur aut. Minus hic eaque eum qui.\
Sit et aut alias ea. Assumenda qui soluta dolorem iure qui adipisci et natus. Id aut occaecati hic optio in facere. Voluptas aspernatur eos voluptates. Qui voluptatem quos ea corrupti veritatis.\
Vel reprehenderit possimus minima qui in. Consequatur quia officiis perspiciatis sunt voluptas dolorum aspernatur reiciendis. Ea non ea sed quos. Eos saepe consequatur ipsam quia.", 1065);

    return 0;
}
